#pragma once 

///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// INCLUDES /////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#include "Utils.h"
#include "Draftsman.h"
#include "gmock/gmock.h"

///////////////////////////////////////////////////////////////////////////////
/////////////////////////// CLASSES/STRUCTURES ////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

class DraftsmanMock final : public Draftsman <DraftsmanMock>
{
    public:
        DraftsmanMock (Draftsman <DraftsmanMock>::Config_t v_config) : Draftsman <DraftsmanMock> (v_config) { }
        ~DraftsmanMock () = default;

        MOCK_METHOD2       (DrawText , void    (std::string_view v_text, const Bitmap::Coordinates v_coordinates));
        MOCK_METHOD1       (sendLines, void    (const Bitmap & v_rect));
        MOCK_CONST_METHOD1 (calculate, uint8_t (const Bitmap::Dimensions & v_dimensions));

        uint8_t Calculate (const Bitmap::Dimensions & v_dimensions) const
        {
            return Draftsman <DraftsmanMock>::calculate (v_dimensions);
        }
};

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////// END OF FILE ///////////////////////////////////
///////////////////////////////////////////////////////////////////////////////