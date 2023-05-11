
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilStringListTO")
#ifdef RESTRICT_ComDevexpertsPipestoneApiUtilStringListTO
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilStringListTO 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilStringListTO 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiUtilStringListTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSStringListTO_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiUtilStringListTO || defined(INCLUDE_PSStringListTO))
#define PSStringListTO_

#define RESTRICT_ComDevexpertsPipestoneApiUtilAbstractListTO 1
#define INCLUDE_PSAbstractListTO 1
#include "PSAbstractListTO.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol JavaUtilCollection;
@protocol PSTransferObject;

@interface PSStringListTO : PSAbstractListTO
@property (readonly, class, strong) PSStringListTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (PSStringListTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (instancetype __nonnull)initWithInt:(jint)initialCapacity;

- (PSStringListTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (PSStringListTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

+ (PSStringListTO *)empty;

- (jboolean)isEqual:(id)o;

- (NSString *)getWithInt:(jint)arg0;

- (NSUInteger)hash;

- (NSString *)removeWithInt:(jint)arg0;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (NSString *)setWithInt:(jint)arg0
                  withId:(NSString *)arg1;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

- (NSString *)elementDataWithInt:(jint)arg0;

#pragma mark Package-Private

@end

J2OBJC_STATIC_INIT(PSStringListTO)

inline PSStringListTO *PSStringListTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSStringListTO *PSStringListTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSStringListTO, EMPTY, PSStringListTO *)

FOUNDATION_EXPORT void PSStringListTO_init(PSStringListTO *self);

FOUNDATION_EXPORT PSStringListTO *new_PSStringListTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSStringListTO *create_PSStringListTO_init(void);

FOUNDATION_EXPORT void PSStringListTO_initWithInt_(PSStringListTO *self, jint initialCapacity);

FOUNDATION_EXPORT PSStringListTO *new_PSStringListTO_initWithInt_(jint initialCapacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSStringListTO *create_PSStringListTO_initWithInt_(jint initialCapacity);

FOUNDATION_EXPORT void PSStringListTO_initWithJavaUtilCollection_(PSStringListTO *self, id<JavaUtilCollection> collection);

FOUNDATION_EXPORT PSStringListTO *new_PSStringListTO_initWithJavaUtilCollection_(id<JavaUtilCollection> collection) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSStringListTO *create_PSStringListTO_initWithJavaUtilCollection_(id<JavaUtilCollection> collection);

FOUNDATION_EXPORT PSStringListTO *PSStringListTO_empty(void);

J2OBJC_TYPE_LITERAL_HEADER(PSStringListTO)

@compatibility_alias ComDevexpertsPipestoneApiUtilStringListTO PSStringListTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilStringListTO")
