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
		return dynamic_cast<SynthSound*>(sound) != nullptr;
	}
	//=====================================
	void startNote(int midiNoteNumber, float velocity, SynthesiserSound* sound, int
		currentPitchWheelPosition)
	{
		frequency = MidiMessage::getMidiNoteInHertz(midiNoteNumber);
		std::cout << std::to_string(midiNoteNumber) << std::endl;
	}
	//======================================
	void stopNote(float velocity, bool alloTailOff)
	{
		clearCurrentNote();
	}
	//==========================================
	void pitchWheelMoved(int newPitchWheelValue)
	{

	}
	//==========================================
	void controllerMoved(int controllerNumber, int ontrollerValue)
	{

	}
	//==============================================
	void renderNextBlock(AudioBuffer<float> &outputBuffer, int startSample, int numSamples)
	{

	}
	//==============================================
private:
	double level;
	double frequency;
};