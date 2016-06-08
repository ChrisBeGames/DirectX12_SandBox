#pragma once

#include "d3d12App.h"

class SandBoxD3D12App : public D3DApp
{
public:

	SandBoxD3D12App(HINSTANCE hInstance);
	SandBoxD3D12App(const SandBoxD3D12App& rhs) = delete;
	SandBoxD3D12App& operator=(const SandBoxD3D12App& rhs) = delete;
	~SandBoxD3D12App();

	virtual bool Initialize() override;

private:

	virtual void OnResize()override;
	virtual void Update(const GameTimer& gt)override;
	virtual void Draw(const GameTimer& gt)override;

	virtual void OnMouseDown(WPARAM btnState, int x, int y)override;
	virtual void OnMouseUp(WPARAM btnState, int x, int y)override;
	virtual void OnMouseMove(WPARAM btnState, int x, int y)override;

};