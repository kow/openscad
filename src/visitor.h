#ifndef VISITOR_H_
#define VISITOR_H_

#include "traverser.h"

class Visitor
{
public:
  Visitor() {}
  virtual ~Visitor() {}
  
  virtual Response visit(const class State &state, const class AbstractNode &node) = 0;
  virtual Response visit(const class State &state, const class AbstractIntersectionNode &node) {
		return visit(state, (const class AbstractNode &)node);
	}
  virtual Response visit(const class State &state, const class AbstractPolyNode &node) {
		return visit(state, (const class AbstractNode &)node);
	}
  virtual Response visit(const class State &state, const class CgaladvNode &node) {
		return visit(state, (const class AbstractNode &)node);
	}
  virtual Response visit(const class State &state, const class CsgNode &node) {
		return visit(state, (const class AbstractNode &)node);
	}
  virtual Response visit(const class State &state, const class DxfLinearExtrudeNode &node) {
		return visit(state, (const class AbstractPolyNode &)node);
	}
  virtual Response visit(const class State &state, const class DxfRotateExtrudeNode &node) {
		return visit(state, (const class AbstractPolyNode &)node);
	}
  virtual Response visit(const class State &state, const class ImportNode &node) {
		return visit(state, (const class AbstractPolyNode &)node);
	}
  virtual Response visit(const class State &state, const class PrimitiveNode &node) {
		return visit(state, (const class AbstractPolyNode &)node);
	}
  virtual Response visit(const class State &state, const class ProjectionNode &node) {
		return visit(state, (const class AbstractPolyNode &)node);
	}
  virtual Response visit(const class State &state, const class RenderNode &node) {
		return visit(state, (const class AbstractNode &)node);
	}
  virtual Response visit(const class State &state, const class SurfaceNode &node) {
		return visit(state, (const class AbstractPolyNode &)node);
	}
  virtual Response visit(const class State &state, const class TransformNode &node) {
		return visit(state, (const class AbstractNode &)node);
	}
	// Add visit() methods for new visitable subtypes of AbstractNode here
};

#endif