
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderOrderCloseByOrderEventBuilder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelEventBuilderOrderCloseByOrderEventBuilder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderOrderCloseByOrderEventBuilder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderOrderCloseByOrderEventBuilder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelEventBuilderOrderCloseByOrderEventBuilder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETCloseByOrderEventBuilder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderOrderCloseByOrderEventBuilder || defined(INCLUDE_DXMARKETCloseByOrderEventBuilder))
#define DXMARKETCloseByOrderEventBuilder_

#define RESTRICT_ComDevexpertsDxmarketClientModelEventBuilderOrderDefaultOrderEventBuilder 1
#define INCLUDE_DXMARKETDefaultOrderEventBuilder 1
#include "DXMARKETDefaultOrderEventBuilder.h"

@class DXOrderEventTO;
@protocol DXDecimalFormatter;
@protocol DXMARKETCharSequenceBuilder;
@protocol DXMARKETEventStringProvider;

@interface DXMARKETCloseByOrderEventBuilder : DXMARKETDefaultOrderEventBuilder

#pragma mark Public

- (instancetype __nonnull)initWithDXOrderEventTO:(DXOrderEventTO *)event
                 withDXMARKETEventStringProvider:(id<DXMARKETEventStringProvider>)provider
                          withDXDecimalFormatter:(id<DXDecimalFormatter>)decimalFormatter;

#pragma mark Protected

- (void)writeClosePositionPrefixWithDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)sb;

- (void)writeDefaultWithDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)sb;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETCloseByOrderEventBuilder)

FOUNDATION_EXPORT void DXMARKETCloseByOrderEventBuilder_initWithDXOrderEventTO_withDXMARKETEventStringProvider_withDXDecimalFormatter_(DXMARKETCloseByOrderEventBuilder *self, DXOrderEventTO *event, id<DXMARKETEventStringProvider> provider, id<DXDecimalFormatter> decimalFormatter);

FOUNDATION_EXPORT DXMARKETCloseByOrderEventBuilder *new_DXMARKETCloseByOrderEventBuilder_initWithDXOrderEventTO_withDXMARKETEventStringProvider_withDXDecimalFormatter_(DXOrderEventTO *event, id<DXMARKETEventStringProvider> provider, id<DXDecimalFormatter> decimalFormatter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETCloseByOrderEventBuilder *create_DXMARKETCloseByOrderEventBuilder_initWithDXOrderEventTO_withDXMARKETEventStringProvider_withDXDecimalFormatter_(DXOrderEventTO *event, id<DXMARKETEventStringProvider> provider, id<DXDecimalFormatter> decimalFormatter);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETCloseByOrderEventBuilder)

@compatibility_alias ComDevexpertsDxmarketClientModelEventBuilderOrderCloseByOrderEventBuilder DXMARKETCloseByOrderEventBuilder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderOrderCloseByOrderEventBuilder")
