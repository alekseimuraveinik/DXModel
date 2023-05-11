
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderOrderDefaultOrderEventBuilder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelEventBuilderOrderDefaultOrderEventBuilder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderOrderDefaultOrderEventBuilder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderOrderDefaultOrderEventBuilder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelEventBuilderOrderDefaultOrderEventBuilder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETDefaultOrderEventBuilder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderOrderDefaultOrderEventBuilder || defined(INCLUDE_DXMARKETDefaultOrderEventBuilder))
#define DXMARKETDefaultOrderEventBuilder_

#define RESTRICT_ComDevexpertsDxmarketClientModelEventBuilderEventMessageBuilder 1
#define INCLUDE_DXMARKETEventMessageBuilder 1
#include "DXMARKETEventMessageBuilder.h"

@class DXOrderEventTO;
@protocol DXDecimalFormatter;
@protocol DXMARKETCharSequenceBuilder;
@protocol DXMARKETEventStringProvider;

@interface DXMARKETDefaultOrderEventBuilder : NSObject < DXMARKETEventMessageBuilder > {
 @public
  id<DXMARKETEventStringProvider> provider_;
  DXOrderEventTO *event_;
}

#pragma mark Public

- (instancetype __nonnull)initWithDXOrderEventTO:(DXOrderEventTO *)event
                 withDXMARKETEventStringProvider:(id<DXMARKETEventStringProvider>)provider
                          withDXDecimalFormatter:(id<DXDecimalFormatter>)decimalFormatter;

- (void)writeMessageWithDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)sb;

- (void)writeTitleWithDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)sb;

#pragma mark Protected

- (void)atWithDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)sb;

- (void)colonWithDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)sb;

- (id<DXDecimalFormatter>)getDecimalFormatter;

- (void)spaceWithDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)sb;

- (void)writeBetSignWithDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)sb;

- (void)writeDefaultWithDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)sb;

- (void)writeDirectionWithDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)sb;

- (void)writeEventTypeWithDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)sb;

- (void)writeOrderKeyWithDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)sb;

- (void)writeOrderTypeWithDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)sb;

- (void)writePriceWithDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)sb;

- (void)writeQuantityWithDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)sb;

- (void)writeRejectReasonWithDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)sb;

- (void)writeSymbolWithDXMARKETCharSequenceBuilder:(id<DXMARKETCharSequenceBuilder>)sb;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETDefaultOrderEventBuilder)

J2OBJC_FIELD_SETTER(DXMARKETDefaultOrderEventBuilder, provider_, id<DXMARKETEventStringProvider>)
J2OBJC_FIELD_SETTER(DXMARKETDefaultOrderEventBuilder, event_, DXOrderEventTO *)

FOUNDATION_EXPORT void DXMARKETDefaultOrderEventBuilder_initWithDXOrderEventTO_withDXMARKETEventStringProvider_withDXDecimalFormatter_(DXMARKETDefaultOrderEventBuilder *self, DXOrderEventTO *event, id<DXMARKETEventStringProvider> provider, id<DXDecimalFormatter> decimalFormatter);

FOUNDATION_EXPORT DXMARKETDefaultOrderEventBuilder *new_DXMARKETDefaultOrderEventBuilder_initWithDXOrderEventTO_withDXMARKETEventStringProvider_withDXDecimalFormatter_(DXOrderEventTO *event, id<DXMARKETEventStringProvider> provider, id<DXDecimalFormatter> decimalFormatter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETDefaultOrderEventBuilder *create_DXMARKETDefaultOrderEventBuilder_initWithDXOrderEventTO_withDXMARKETEventStringProvider_withDXDecimalFormatter_(DXOrderEventTO *event, id<DXMARKETEventStringProvider> provider, id<DXDecimalFormatter> decimalFormatter);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETDefaultOrderEventBuilder)

@compatibility_alias ComDevexpertsDxmarketClientModelEventBuilderOrderDefaultOrderEventBuilder DXMARKETDefaultOrderEventBuilder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderOrderDefaultOrderEventBuilder")
