// IVolume.h
#pragma once

////////////////////////////////////////////////////////////////////////
// IVolume interface
class __declspec(novtable) IVolume
{
public:
	virtual bool	IsAvailable() = 0;
	virtual void	Enable() = 0;
	virtual void	Disable() = 0;

	virtual DWORD	GetVolumeMetric() = 0;

	virtual DWORD	GetMinimalVolume() = 0;
	virtual DWORD	GetMaximalVolume() = 0;

	virtual DWORD	GetCurrentVolume() = 0;
	virtual void	SetCurrentVolume( DWORD dwValue ) = 0;
};
