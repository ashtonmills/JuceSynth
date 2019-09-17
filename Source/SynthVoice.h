/*
  ==============================================================================

    SynthVoice.h
    Created: 17 Sep 2019 5:39:52pm
    Author:  ashton_mills

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "SynthSound.h"

class SynthVoice : public SynthesiserVoice
{
public:
	bool canPlaySound(SynthesiserSound* sound)
	{

	}
	//=====================================
	void startNote(int midiNoteNumber, float velocity, SynthesiserSound* sound, int
		currentPitchWheelPosition)
	{

	}
	//======================================
	void stopNote(float velocity, bool alloTailOff)
	{

	}
	//==========================================
	void pitchWheelMove(int newPitchWheelValue)
	{

	}
	//==========================================
	void controllerMove(int controllerNumber, int controllerValue)
	{

	}
	//==============================================
	void renderNextBlock(AudioBuffer<float> &outputBuffer, int startSample, int numSamples)
	{

	}
	//==============================================
private:

};