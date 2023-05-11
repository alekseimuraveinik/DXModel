
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedStopCondition")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelSectionedStopCondition
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedStopCondition 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedStopCondition 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelSectionedStopCondition

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETStopCondition_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedStopCondition || defined(INCLUDE_DXMARKETStopCondition))
#define DXMARKETStopCondition_

@protocol DXMARKETStopCondition < JavaObject >

- (jboolean)visitWithId:(id)section
                 withId:(id)item;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETStopCondition)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETStopCondition)

#define ComDevexpertsDxmarketClientModelSectionedStopCondition DXMARKETStopCondition

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelSectionedStopCondition")
