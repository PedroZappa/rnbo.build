#include <iostream>
#include "RNBO.h"

int main(int argc, const char * argv[]) {

	RNBO::CoreObject rnboObject;
	rnboObject.prepareToProcess(44100, 64);

	RNBO::SampleValue** outputs = new RNBO::SampleValue*[1];
	outputs[0] = new double[64];

	rnboObject.process((RNBO::SampleValue**) nullptr, 0, outputs, 1, 64);

	for (int i = 0; i < 64; i++) {
		std::cout << outputs[0][i] << "\n";
	} 

	delete [] outputs[0];
	delete [] outputs;

	return 0;
}
