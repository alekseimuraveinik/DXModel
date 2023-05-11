
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientApiFeedsFeedId")
#ifdef RESTRICT_ComDevexpertsPipestoneClientApiFeedsFeedId
#define INCLUDE_ALL_ComDevexpertsPipestoneClientApiFeedsFeedId 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientApiFeedsFeedId 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientApiFeedsFeedId

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSFeedId_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientApiFeedsFeedId || defined(INCLUDE_PSFeedId))
#define PSFeedId_

@protocol PSTypeProvider;

@interface PSFeedId : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithPSTypeProvider:(id<PSTypeProvider>)type
                                    withNSString:(NSString *)name;

- (jboolean)isEqual:(id)o;

- (NSString *)getName;

- (id<PSTypeProvider>)getType;

- (NSUInteger)hash;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSFeedId)

FOUNDATION_EXPORT void PSFeedId_initWithPSTypeProvider_withNSString_(PSFeedId *self, id<PSTypeProvider> type, NSString *name);

FOUNDATION_EXPORT PSFeedId *new_PSFeedId_initWithPSTypeProvider_withNSString_(id<PSTypeProvider> type, NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSFeedId *create_PSFeedId_initWithPSTypeProvider_withNSString_(id<PSTypeProvider> type, NSString *name);

J2OBJC_TYPE_LITERAL_HEADER(PSFeedId)

@compatibility_alias ComDevexpertsPipestoneClientApiFeedsFeedId PSFeedId;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientApiFeedsFeedId")
