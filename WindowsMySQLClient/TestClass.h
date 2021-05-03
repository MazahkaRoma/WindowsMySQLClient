#pragma once

public class Test
{

};

public ref class TestClass
{
public:
	
	TestClass();

	int b = 5;

private:
	Test* test = new Test();
};
