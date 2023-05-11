
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderEventMessageBuilderFactory")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelEventBuilderEventMessageBuilderFactory
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderEventMessageBuilderFactory 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderEventMessageBuilderFactory 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelEventBuilderEventMessageBuilderFactory

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETEventMessageBuilderFactory_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderEventMessageBuilderFactory || defined(INCLUDE_DXMARKETEventMessageBuilderFactory))
#define DXMARKETEventMessageBuilderFactory_

@class DXEventTO;
@protocol DXMARKETEventMessageBuilder;

@protocol DXMARKETEventMessageBuilderFactory < JavaObject >

- (id<DXMARKETEventMessageBuilder>)getBuilderWithDXEventTO:(DXEventTO *)event;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETEventMessageBuilderFactory)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETEventMessageBuilderFactory)

#define ComDevexpertsDxmarketClientModelEventBuilderEventMessageBuilderFactory DXMARKETEventMessageBuilderFactory

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderEventMessageBuilderFactory")
