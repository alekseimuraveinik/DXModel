
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilReferenceTO")
#ifdef RESTRICT_ComDevexpertsPipestoneApiUtilReferenceTO
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilReferenceTO 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilReferenceTO 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiUtilReferenceTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSReferenceTO_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiUtilReferenceTO || defined(INCLUDE_PSReferenceTO))
#define PSReferenceTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface PSReferenceTO : PSBaseTransferObject
@property (readonly, class, strong) PSReferenceTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (PSReferenceTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (PSReferenceTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (PSReferenceTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jint)getId;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setIdWithInt:(jint)id_;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(PSReferenceTO)

inline PSReferenceTO *PSReferenceTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSReferenceTO *PSReferenceTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSReferenceTO, EMPTY, PSReferenceTO *)

FOUNDATION_EXPORT void PSReferenceTO_init(PSReferenceTO *self);

FOUNDATION_EXPORT PSReferenceTO *new_PSReferenceTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSReferenceTO *create_PSReferenceTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSReferenceTO)

@compatibility_alias ComDevexpertsPipestoneApiUtilReferenceTO PSReferenceTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilReferenceTO")
