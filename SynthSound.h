/*
  ==============================================================================

    SynthSound.h
    Created: 17 Sep 2019 5:39:39pm
    Author:  ashton_mills

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class SynthSound : public SynthesiserSound
{
public	: 
	bool appliesToNote(int /*midiNoteNumber*/) 
	{
		return true;
	}
	bool appliesToChannel(int /*midiChannel*/) 
	{
		return true;
	}

};