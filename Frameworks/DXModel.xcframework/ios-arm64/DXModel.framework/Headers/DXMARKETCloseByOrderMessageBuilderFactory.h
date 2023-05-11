
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderOrderCloseByOrderMessageBuilderFactory")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelEventBuilderOrderCloseByOrderMessageBuilderFactory
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderOrderCloseByOrderMessageBuilderFactory 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderOrderCloseByOrderMessageBuilderFactory 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelEventBuilderOrderCloseByOrderMessageBuilderFactory

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETCloseByOrderMessageBuilderFactory_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderOrderCloseByOrderMessageBuilderFactory || defined(INCLUDE_DXMARKETCloseByOrderMessageBuilderFactory))
#define DXMARKETCloseByOrderMessageBuilderFactory_

#define RESTRICT_ComDevexpertsDxmarketClientModelEventBuilderEventMessageBuilderFactory 1
#define INCLUDE_DXMARKETEventMessageBuilderFactory 1
#include "DXMARKETEventMessageBuilderFactory.h"

@class DXEventTO;
@protocol DXDecimalFormatter;
@protocol DXMARKETEventMessageBuilder;
@protocol DXMARKETEventStringProvider;

@interface DXMARKETCloseByOrderMessageBuilderFactory : NSObject < DXMARKETEventMessageBuilderFactory > {
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

J2OBJC_EMPTY_STATIC_INIT(DXMARKETCloseByOrderMessageBuilderFactory)

J2OBJC_FIELD_SETTER(DXMARKETCloseByOrderMessageBuilderFactory, provider_, id<DXMARKETEventStringProvider>)

FOUNDATION_EXPORT void DXMARKETCloseByOrderMessageBuilderFactory_initWithDXMARKETEventStringProvider_withDXDecimalFormatter_(DXMARKETCloseByOrderMessageBuilderFactory *self, id<DXMARKETEventStringProvider> provider, id<DXDecimalFormatter> decimalFormatter);

FOUNDATION_EXPORT DXMARKETCloseByOrderMessageBuilderFactory *new_DXMARKETCloseByOrderMessageBuilderFactory_initWithDXMARKETEventStringProvider_withDXDecimalFormatter_(id<DXMARKETEventStringProvider> provider, id<DXDecimalFormatter> decimalFormatter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETCloseByOrderMessageBuilderFactory *create_DXMARKETCloseByOrderMessageBuilderFactory_initWithDXMARKETEventStringProvider_withDXDecimalFormatter_(id<DXMARKETEventStringProvider> provider, id<DXDecimalFormatter> decimalFormatter);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETCloseByOrderMessageBuilderFactory)

@compatibility_alias ComDevexpertsDxmarketClientModelEventBuilderOrderCloseByOrderMessageBuilderFactory DXMARKETCloseByOrderMessageBuilderFactory;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderOrderCloseByOrderMessageBuilderFactory")
