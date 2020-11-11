#pragma once 

///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// INCLUDES /////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#include "Display.h"
#include "DisplayMock.hxx"

///////////////////////////////////////////////////////////////////////////////
/////////////////////////// CLASSES/STRUCTURES ////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

class DisplayFixture : public ::testing::Test
{
    public:
        static constexpr char * MODULE = (char *)"DisplayFixture";
        DisplayMock::Config_t   Config = { FIFTEEN, {THREE_HUNDRED_TWENTY, TWO_HUNDRED_FORTY} };
        BitmapMock              BitmapMock;
        DisplayMock             DisplayMock;

        DisplayFixture () : DisplayMock (Config) { }
        ~DisplayFixture () = default;

        void TestBody () override { }
        void SetUp    () override { }
        void TearDown () override { }
};

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////// END OF FILE ///////////////////////////////////
///////////////////////////////////////////////////////////////////////////////