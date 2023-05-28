#pragma once

#include <Windows.h>
#include <d3d11.h>

class Renderer {
public:
	Renderer(HWND hWnd);
	~Renderer();

	Renderer() = delete;
	Renderer(const Renderer&) = delete;
	Renderer operator=(const Renderer&) = delete;

	void Draw() const;

private:
	IDXGISwapChain* m_PSwapChain;
	ID3D11Device* m_PDevice;
	ID3D11DeviceContext* m_PDeviceContext;
};