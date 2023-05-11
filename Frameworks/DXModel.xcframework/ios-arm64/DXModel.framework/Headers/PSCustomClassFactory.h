
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonApiCustomClassFactory")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonApiCustomClassFactory
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonApiCustomClassFactory 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonApiCustomClassFactory 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonApiCustomClassFactory

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSCustomClassFactory_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonApiCustomClassFactory || defined(INCLUDE_PSCustomClassFactory))
#define PSCustomClassFactory_

@class PSVersionInfo;
@protocol JavaUtilMap;
@protocol JavaUtilSet;
@protocol PSCustomSerializable;

@interface PSCustomClassFactory : NSObject
@property (readonly, class, strong) id<JavaUtilSet> BY_INSTANCE_CLASSES NS_SWIFT_NAME(BY_INSTANCE_CLASSES);
@property (readonly, class, strong) id<JavaUtilMap> ID_BY_CLASS NS_SWIFT_NAME(ID_BY_CLASS);
@property (readonly, class, strong) id<JavaUtilMap> ID_BY_INSTANCE NS_SWIFT_NAME(ID_BY_INSTANCE);

+ (id<JavaUtilSet>)BY_INSTANCE_CLASSES;

+ (id<JavaUtilMap>)ID_BY_CLASS;

+ (id<JavaUtilMap>)ID_BY_INSTANCE;

#pragma mark Public

- (NSString *)getChecksum;

- (jint)getProtocolVersion;

- (PSVersionInfo *)idOfWithPSCustomSerializable:(id<PSCustomSerializable>)object;

- (id<PSCustomSerializable>)instanceForWithInt:(jint)id_;

#pragma mark Protected

- (instancetype __nonnull)initWithInt:(jint)protocolVersion
                         withNSString:(NSString *)checksum;

- (void)checkProtocolVersion;

- (jint)getHighestSupportedVersion;

+ (void)registerInstanceWithPSCustomSerializable:(id<PSCustomSerializable>)object
                               withPSVersionInfo:(PSVersionInfo *)info;

@end

J2OBJC_STATIC_INIT(PSCustomClassFactory)

inline id<JavaUtilSet> PSCustomClassFactory_get_BY_INSTANCE_CLASSES(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaUtilSet> PSCustomClassFactory_BY_INSTANCE_CLASSES;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSCustomClassFactory, BY_INSTANCE_CLASSES, id<JavaUtilSet>)

inline id<JavaUtilMap> PSCustomClassFactory_get_ID_BY_CLASS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaUtilMap> PSCustomClassFactory_ID_BY_CLASS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSCustomClassFactory, ID_BY_CLASS, id<JavaUtilMap>)

inline id<JavaUtilMap> PSCustomClassFactory_get_ID_BY_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaUtilMap> PSCustomClassFactory_ID_BY_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSCustomClassFactory, ID_BY_INSTANCE, id<JavaUtilMap>)

FOUNDATION_EXPORT void PSCustomClassFactory_initWithInt_withNSString_(PSCustomClassFactory *self, jint protocolVersion, NSString *checksum);

FOUNDATION_EXPORT void PSCustomClassFactory_registerInstanceWithPSCustomSerializable_withPSVersionInfo_(id<PSCustomSerializable> object, PSVersionInfo *info);

J2OBJC_TYPE_LITERAL_HEADER(PSCustomClassFactory)

@compatibility_alias ComDevexpertsPipestoneCommonApiCustomClassFactory PSCustomClassFactory;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonApiCustomClassFactory")
