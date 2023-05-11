
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilCalendarHolder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientUtilCalendarHolder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilCalendarHolder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilCalendarHolder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientUtilCalendarHolder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETCalendarHolder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientUtilCalendarHolder || defined(INCLUDE_DXMARKETCalendarHolder))
#define DXMARKETCalendarHolder_

@class JavaUtilCalendar;
@protocol DXMARKETTimeProvider;

@interface DXMARKETCalendarHolder : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (JavaUtilCalendar *)getInstance;

+ (void)setCalendarProviderWithDXMARKETTimeProvider:(id<DXMARKETTimeProvider>)timeProvider;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETCalendarHolder)

FOUNDATION_EXPORT void DXMARKETCalendarHolder_init(DXMARKETCalendarHolder *self);

FOUNDATION_EXPORT DXMARKETCalendarHolder *new_DXMARKETCalendarHolder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETCalendarHolder *create_DXMARKETCalendarHolder_init(void);

FOUNDATION_EXPORT JavaUtilCalendar *DXMARKETCalendarHolder_getInstance(void);

FOUNDATION_EXPORT void DXMARKETCalendarHolder_setCalendarProviderWithDXMARKETTimeProvider_(id<DXMARKETTimeProvider> timeProvider);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETCalendarHolder)

@compatibility_alias ComDevexpertsDxmarketClientUtilCalendarHolder DXMARKETCalendarHolder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilCalendarHolder")
