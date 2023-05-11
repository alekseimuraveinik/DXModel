
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderOrderOrderMessageBuilderFactory")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelEventBuilderOrderOrderMessageBuilderFactory
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderOrderOrderMessageBuilderFactory 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderOrderOrderMessageBuilderFactory 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelEventBuilderOrderOrderMessageBuilderFactory

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETOrderMessageBuilderFactory_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderOrderOrderMessageBuilderFactory || defined(INCLUDE_DXMARKETOrderMessageBuilderFactory))
#define DXMARKETOrderMessageBuilderFactory_

#define RESTRICT_ComDevexpertsDxmarketClientModelEventBuilderEventMessageBuilderFactory 1
#define INCLUDE_DXMARKETEventMessageBuilderFactory 1
#include "DXMARKETEventMessageBuilderFactory.h"

@class DXEventTO;
@protocol DXDecimalFormatter;
@protocol DXMARKETEventMessageBuilder;
@protocol DXMARKETEventStringProvider;

@interface DXMARKETOrderMessageBuilderFactory : NSObject < DXMARKETEventMessageBuilderFactory > {
 @public
  id<DXMARKETEventStringProvider> provider_;
}

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETEventStringProvider:(id<DXMARKETEventStringProvider>)provider
                                       withDXDecimalFormatter:(id<DXDecimalFormatter>)decimalFormatter;

- (id<DXMARKETEventMessageBuilder>)getBuilderWithDXEventTO:(DXEventTO *)event;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETOrderMessageBuilderFactory)

J2OBJC_FIELD_SETTER(DXMARKETOrderMessageBuilderFactory, provider_, id<DXMARKETEventStringProvider>)

FOUNDATION_EXPORT void DXMARKETOrderMessageBuilderFactory_initWithDXMARKETEventStringProvider_withDXDecimalFormatter_(DXMARKETOrderMessageBuilderFactory *self, id<DXMARKETEventStringProvider> provider, id<DXDecimalFormatter> decimalFormatter);

FOUNDATION_EXPORT DXMARKETOrderMessageBuilderFactory *new_DXMARKETOrderMessageBuilderFactory_initWithDXMARKETEventStringProvider_withDXDecimalFormatter_(id<DXMARKETEventStringProvider> provider, id<DXDecimalFormatter> decimalFormatter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETOrderMessageBuilderFactory *create_DXMARKETOrderMessageBuilderFactory_initWithDXMARKETEventStringProvider_withDXDecimalFormatter_(id<DXMARKETEventStringProvider> provider, id<DXDecimalFormatter> decimalFormatter);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOrderMessageBuilderFactory)

@compatibility_alias ComDevexpertsDxmarketClientModelEventBuilderOrderOrderMessageBuilderFactory DXMARKETOrderMessageBuilderFactory;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderOrderOrderMessageBuilderFactory")
