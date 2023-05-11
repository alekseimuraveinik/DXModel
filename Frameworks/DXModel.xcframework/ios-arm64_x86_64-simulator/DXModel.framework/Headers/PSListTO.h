
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilListTO")
#ifdef RESTRICT_ComDevexpertsPipestoneApiUtilListTO
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilListTO 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilListTO 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiUtilListTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSListTO_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiUtilListTO || defined(INCLUDE_PSListTO))
#define PSListTO_

#define RESTRICT_ComDevexpertsPipestoneApiUtilAbstractListTO 1
#define INCLUDE_PSAbstractListTO 1
#include "PSAbstractListTO.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol JavaUtilCollection;
@protocol PSTransferObject;

@interface PSListTO : PSAbstractListTO
@property (readonly, class, strong) PSListTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (PSListTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (instancetype __nonnull)initWithInt:(jint)initialCapacity;

- (PSListTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (PSListTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

+ (PSListTO *)empty;

- (jboolean)isEqual:(id)o;

- (id<PSTransferObject>)getWithInt:(jint)arg0;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (id<PSTransferObject>)removeWithInt:(jint)arg0;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (id<PSTransferObject>)setWithInt:(jint)arg0
                            withId:(id<PSTransferObject>)arg1;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

- (id<PSTransferObject>)elementDataWithInt:(jint)arg0;

#pragma mark Package-Private

@end

J2OBJC_STATIC_INIT(PSListTO)

inline PSListTO *PSListTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSListTO *PSListTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSListTO, EMPTY, PSListTO *)

FOUNDATION_EXPORT void PSListTO_init(PSListTO *self);

FOUNDATION_EXPORT PSListTO *new_PSListTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSListTO *create_PSListTO_init(void);

FOUNDATION_EXPORT void PSListTO_initWithInt_(PSListTO *self, jint initialCapacity);

FOUNDATION_EXPORT PSListTO *new_PSListTO_initWithInt_(jint initialCapacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSListTO *create_PSListTO_initWithInt_(jint initialCapacity);

FOUNDATION_EXPORT void PSListTO_initWithJavaUtilCollection_(PSListTO *self, id<JavaUtilCollection> collection);

FOUNDATION_EXPORT PSListTO *new_PSListTO_initWithJavaUtilCollection_(id<JavaUtilCollection> collection) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSListTO *create_PSListTO_initWithJavaUtilCollection_(id<JavaUtilCollection> collection);

FOUNDATION_EXPORT PSListTO *PSListTO_empty(void);

J2OBJC_TYPE_LITERAL_HEADER(PSListTO)

@compatibility_alias ComDevexpertsPipestoneApiUtilListTO PSListTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilListTO")
