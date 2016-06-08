#include "SandBoxApp.h"


SandBoxD3D12App::SandBoxD3D12App(HINSTANCE hInstance) : D3DApp(hInstance)
{

}

SandBoxD3D12App::~SandBoxD3D12App()
{

}

bool SandBoxD3D12App::Initialize()
{
	if (!D3DApp::Initialize())
		return false;

	return true;
}

void SandBoxD3D12App::OnResize()
{
	D3DApp::OnResize();
}
void SandBoxD3D12App::Update(const GameTimer& gt)
{

}
void SandBoxD3D12App::Draw(const GameTimer& gt)
{

}	

void SandBoxD3D12App::OnMouseDown(WPARAM btnState, int x, int y) {};
void SandBoxD3D12App::OnMouseUp(WPARAM btnState, int x, int y) {};
void SandBoxD3D12App::OnMouseMove(WPARAM btnState, int x, int y) {};