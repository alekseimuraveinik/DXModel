
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilEnumSetTO")
#ifdef RESTRICT_ComDevexpertsPipestoneApiUtilEnumSetTO
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilEnumSetTO 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilEnumSetTO 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiUtilEnumSetTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSEnumSetTO_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiUtilEnumSetTO || defined(INCLUDE_PSEnumSetTO))
#define PSEnumSetTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

#define RESTRICT_JavaUtilSet 1
#define INCLUDE_JavaUtilSet 1
#include "java/util/Set.h"

@class IOSObjectArray;
@class PSBaseEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol JavaUtilCollection;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionPredicate;
@protocol JavaUtilIterator;
@protocol JavaUtilSpliterator;
@protocol JavaUtilStreamStream;
@protocol PSTransferObject;

@interface PSEnumSetTO : PSBaseTransferObject < JavaUtilSet >

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithJavaUtilCollection:(id<JavaUtilCollection>)enums;

- (instancetype __nonnull)initWithPSBaseEnum:(PSBaseEnum *)sample;

- (instancetype __nonnull)initWithInt:(jint)maxExpectedOrdinal;

- (jboolean)addWithId:(PSBaseEnum *)e;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (PSEnumSetTO *)change;

- (void)clear;

- (PSBaseTransferObject *)java_clone;

- (jboolean)containsWithId:(id)o;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (PSEnumSetTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

+ (PSEnumSetTO *)emptyWithPSBaseEnum:(PSBaseEnum *)sample;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jboolean)makeReadOnly;

- (jboolean)removeWithId:(id)o;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

#pragma mark Package-Private

@end

J2OBJC_STATIC_INIT(PSEnumSetTO)

FOUNDATION_EXPORT PSEnumSetTO *PSEnumSetTO_emptyWithPSBaseEnum_(PSBaseEnum *sample);

FOUNDATION_EXPORT void PSEnumSetTO_initWithPSBaseEnum_(PSEnumSetTO *self, PSBaseEnum *sample);

FOUNDATION_EXPORT PSEnumSetTO *new_PSEnumSetTO_initWithPSBaseEnum_(PSBaseEnum *sample) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSEnumSetTO *create_PSEnumSetTO_initWithPSBaseEnum_(PSBaseEnum *sample);

FOUNDATION_EXPORT void PSEnumSetTO_initWithInt_(PSEnumSetTO *self, jint maxExpectedOrdinal);

FOUNDATION_EXPORT PSEnumSetTO *new_PSEnumSetTO_initWithInt_(jint maxExpectedOrdinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSEnumSetTO *create_PSEnumSetTO_initWithInt_(jint maxExpectedOrdinal);

FOUNDATION_EXPORT void PSEnumSetTO_initWithJavaUtilCollection_(PSEnumSetTO *self, id<JavaUtilCollection> enums);

FOUNDATION_EXPORT PSEnumSetTO *new_PSEnumSetTO_initWithJavaUtilCollection_(id<JavaUtilCollection> enums) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSEnumSetTO *create_PSEnumSetTO_initWithJavaUtilCollection_(id<JavaUtilCollection> enums);

FOUNDATION_EXPORT void PSEnumSetTO_init(PSEnumSetTO *self);

FOUNDATION_EXPORT PSEnumSetTO *new_PSEnumSetTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSEnumSetTO *create_PSEnumSetTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSEnumSetTO)

@compatibility_alias ComDevexpertsPipestoneApiUtilEnumSetTO PSEnumSetTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilEnumSetTO")
