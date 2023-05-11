
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilSerializationPatchUtils")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilSerializationPatchUtils
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilSerializationPatchUtils 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilSerializationPatchUtils 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilSerializationPatchUtils

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSPatchUtils_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilSerializationPatchUtils || defined(INCLUDE_PSPatchUtils))
#define PSPatchUtils_

@class IOSByteArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSObjectArray;
@protocol PSTransferObject;

@interface PSPatchUtils : NSObject

#pragma mark Public

+ (IOSByteArray *)applyPatchWithByteArray:(IOSByteArray *)base
                            withByteArray:(IOSByteArray *)patch;

+ (jint)applyPatchWithInt:(jint)base
                  withInt:(jint)patch;

+ (IOSIntArray *)applyPatchWithIntArray:(IOSIntArray *)base
                           withIntArray:(IOSIntArray *)patch;

+ (jlong)applyPatchWithLong:(jlong)base
                   withLong:(jlong)patch;

+ (IOSLongArray *)applyPatchWithLongArray:(IOSLongArray *)base
                            withLongArray:(IOSLongArray *)patch;

+ (id)applyPatchWithId:(id)base
                withId:(id)patch;

+ (IOSObjectArray *)applyPatchWithNSObjectArray:(IOSObjectArray *)base
                              withNSObjectArray:(IOSObjectArray *)patch;

+ (id<PSTransferObject>)applyPatchWithPSTransferObject:(id<PSTransferObject>)base
                                  withPSTransferObject:(id<PSTransferObject>)patch;

+ (IOSObjectArray *)applyPatchWithPSTransferObjectArray:(IOSObjectArray *)base
                              withPSTransferObjectArray:(IOSObjectArray *)patch;

+ (IOSByteArray *)createPatchWithByteArray:(IOSByteArray *)base
                             withByteArray:(IOSByteArray *)updated;

+ (jint)createPatchWithInt:(jint)base
                   withInt:(jint)updated;

+ (IOSIntArray *)createPatchWithIntArray:(IOSIntArray *)base
                            withIntArray:(IOSIntArray *)updated;

+ (jlong)createPatchWithLong:(jlong)base
                    withLong:(jlong)updated;

+ (IOSLongArray *)createPatchWithLongArray:(IOSLongArray *)base
                             withLongArray:(IOSLongArray *)updated;

+ (id)createPatchWithId:(id)base
                 withId:(id)updated;

+ (IOSObjectArray *)createPatchWithNSObjectArray:(IOSObjectArray *)base
                               withNSObjectArray:(IOSObjectArray *)updated;

+ (id<PSTransferObject>)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                                   withPSTransferObject:(id<PSTransferObject>)updated;

+ (IOSObjectArray *)createPatchWithPSTransferObjectArray:(IOSObjectArray *)base
                               withPSTransferObjectArray:(IOSObjectArray *)updated;

@end

J2OBJC_EMPTY_STATIC_INIT(PSPatchUtils)

FOUNDATION_EXPORT jint PSPatchUtils_createPatchWithInt_withInt_(jint base, jint updated);

FOUNDATION_EXPORT jlong PSPatchUtils_createPatchWithLong_withLong_(jlong base, jlong updated);

FOUNDATION_EXPORT IOSByteArray *PSPatchUtils_createPatchWithByteArray_withByteArray_(IOSByteArray *base, IOSByteArray *updated);

FOUNDATION_EXPORT IOSIntArray *PSPatchUtils_createPatchWithIntArray_withIntArray_(IOSIntArray *base, IOSIntArray *updated);

FOUNDATION_EXPORT IOSLongArray *PSPatchUtils_createPatchWithLongArray_withLongArray_(IOSLongArray *base, IOSLongArray *updated);

FOUNDATION_EXPORT id PSPatchUtils_createPatchWithId_withId_(id base, id updated);

FOUNDATION_EXPORT id<PSTransferObject> PSPatchUtils_createPatchWithPSTransferObject_withPSTransferObject_(id<PSTransferObject> base, id<PSTransferObject> updated);

FOUNDATION_EXPORT IOSObjectArray *PSPatchUtils_createPatchWithPSTransferObjectArray_withPSTransferObjectArray_(IOSObjectArray *base, IOSObjectArray *updated);

FOUNDATION_EXPORT IOSObjectArray *PSPatchUtils_createPatchWithNSObjectArray_withNSObjectArray_(IOSObjectArray *base, IOSObjectArray *updated);

FOUNDATION_EXPORT jint PSPatchUtils_applyPatchWithInt_withInt_(jint base, jint patch);

FOUNDATION_EXPORT jlong PSPatchUtils_applyPatchWithLong_withLong_(jlong base, jlong patch);

FOUNDATION_EXPORT IOSByteArray *PSPatchUtils_applyPatchWithByteArray_withByteArray_(IOSByteArray *base, IOSByteArray *patch);

FOUNDATION_EXPORT IOSIntArray *PSPatchUtils_applyPatchWithIntArray_withIntArray_(IOSIntArray *base, IOSIntArray *patch);

FOUNDATION_EXPORT IOSLongArray *PSPatchUtils_applyPatchWithLongArray_withLongArray_(IOSLongArray *base, IOSLongArray *patch);

FOUNDATION_EXPORT id PSPatchUtils_applyPatchWithId_withId_(id base, id patch);

FOUNDATION_EXPORT id<PSTransferObject> PSPatchUtils_applyPatchWithPSTransferObject_withPSTransferObject_(id<PSTransferObject> base, id<PSTransferObject> patch);

FOUNDATION_EXPORT IOSObjectArray *PSPatchUtils_applyPatchWithNSObjectArray_withNSObjectArray_(IOSObjectArray *base, IOSObjectArray *patch);

FOUNDATION_EXPORT IOSObjectArray *PSPatchUtils_applyPatchWithPSTransferObjectArray_withPSTransferObjectArray_(IOSObjectArray *base, IOSObjectArray *patch);

J2OBJC_TYPE_LITERAL_HEADER(PSPatchUtils)

@compatibility_alias ComDevexpertsPipestoneCommonUtilSerializationPatchUtils PSPatchUtils;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilSerializationPatchUtils")
