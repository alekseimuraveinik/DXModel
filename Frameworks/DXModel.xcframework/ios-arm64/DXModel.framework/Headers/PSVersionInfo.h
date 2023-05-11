
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonApiVersionInfo")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonApiVersionInfo
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonApiVersionInfo 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonApiVersionInfo 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonApiVersionInfo

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSVersionInfo_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonApiVersionInfo || defined(INCLUDE_PSVersionInfo))
#define PSVersionInfo_

@interface PSVersionInfo : NSObject {
 @public
  jint versionSince_;
  jint id__;
  jboolean instance_;
}

#pragma mark Public

- (instancetype __nonnull)initWithInt:(jint)id_
                              withInt:(jint)versionSince
                          withBoolean:(jboolean)instance;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSVersionInfo)

FOUNDATION_EXPORT void PSVersionInfo_initWithInt_withInt_withBoolean_(PSVersionInfo *self, jint id_, jint versionSince, jboolean instance);

FOUNDATION_EXPORT PSVersionInfo *new_PSVersionInfo_initWithInt_withInt_withBoolean_(jint id_, jint versionSince, jboolean instance) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSVersionInfo *create_PSVersionInfo_initWithInt_withInt_withBoolean_(jint id_, jint versionSince, jboolean instance);

J2OBJC_TYPE_LITERAL_HEADER(PSVersionInfo)

@compatibility_alias ComDevexpertsPipestoneCommonApiVersionInfo PSVersionInfo;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonApiVersionInfo")
