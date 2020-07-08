/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
Gain2AudioProcessorEditor::Gain2AudioProcessorEditor (Gain2AudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    setSize(200, 400);

    gainSlider.setSliderStyle(Slider::SliderStyle::LinearVertical);
    gainSlider.setRange(0.0, 1.0);
    gainSlider.setValue(processor.rawVolume);
    gainSlider.setTextBoxStyle(Slider::TextBoxBelow, true, 100, 25);
    gainSlider.addListener(this);
    addAndMakeVisible(gainSlider);
}

Gain2AudioProcessorEditor::~Gain2AudioProcessorEditor()
{
}

//==============================================================================
void Gain2AudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
}

void Gain2AudioProcessorEditor::resized()
{
    gainSlider.setBounds(getLocalBounds());
}

void Gain2AudioProcessorEditor::sliderValueChanged(Slider* slider)
{
    if (slider = &gainSlider) {
        processor.rawVolume = gainSlider.getValue();
    }
}
