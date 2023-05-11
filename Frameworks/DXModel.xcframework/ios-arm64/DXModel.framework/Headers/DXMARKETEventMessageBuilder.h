
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderEventMessageBuilder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelEventBuilderEventMessageBuilder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderEventMessageBuilder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderEventMessageBuilder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelEventBuilderEventMessageBuilder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETEventMessageBuilder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderEventMessageBuilder || defined(INCLUDE_DXMARKETEventMessageBuilder))
#define DXMARKETEventMessageBuilder_

@protocol DXMARKETCharSequenceBuilder;

@protocol DXMARKETEventMessageBuilder < JavaObject >

- (void)writeTitleWithDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)sb;

- (void)writeMessageWithDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)sb;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETEventMessageBuilder)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETEventMessageBuilder)

#define ComDevexpertsDxmarketClientModelEventBuilderEventMessageBuilder DXMARKETEventMessageBuilder

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderEventMessageBuilder")
