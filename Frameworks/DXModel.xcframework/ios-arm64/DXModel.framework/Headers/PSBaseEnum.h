
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonApiBaseEnum")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonApiBaseEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonApiBaseEnum 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSBaseEnum_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonApiBaseEnum || defined(INCLUDE_PSBaseEnum))
#define PSBaseEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface PSBaseEnum : PSBaseTransferObject < JavaLangComparable >

#pragma mark Public

- (jint)compareToWithId:(PSBaseEnum *)o;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (PSBaseEnum *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSBaseEnum *)findByOrdinalWithInt:(jint)ordinal;

- (NSUInteger)hash;

- (PSBaseTransferObject *)java_clone;

- (NSString *)name;

- (jint)ordinal;

- (void)patchWithPSTransferObject:(id<PSTransferObject>)base;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (NSString *)description;

#pragma mark Protected

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_EMPTY_STATIC_INIT(PSBaseEnum)

FOUNDATION_EXPORT void PSBaseEnum_initWithNSString_withInt_(PSBaseEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT void PSBaseEnum_init(PSBaseEnum *self);

J2OBJC_TYPE_LITERAL_HEADER(PSBaseEnum)

@compatibility_alias ComDevexpertsPipestoneCommonApiBaseEnum PSBaseEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonApiBaseEnum")
