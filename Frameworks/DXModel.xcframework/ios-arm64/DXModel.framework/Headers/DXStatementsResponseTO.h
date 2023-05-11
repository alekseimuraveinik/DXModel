
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserStatementsResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUserStatementsResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserStatementsResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserStatementsResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUserStatementsResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStatementsResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserStatementsResponseTO || defined(INCLUDE_DXStatementsResponseTO))
#define DXStatementsResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXStatementsResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXStatementsResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXStatementsResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)statementsURL;

- (DXStatementsResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXStatementsResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getStatementsURL;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setStatementsURLWithNSString:(NSString *)statementsURL;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXStatementsResponseTO)

inline DXStatementsResponseTO *DXStatementsResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStatementsResponseTO *DXStatementsResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStatementsResponseTO, EMPTY, DXStatementsResponseTO *)

FOUNDATION_EXPORT void DXStatementsResponseTO_initWithNSString_(DXStatementsResponseTO *self, NSString *statementsURL);

FOUNDATION_EXPORT DXStatementsResponseTO *new_DXStatementsResponseTO_initWithNSString_(NSString *statementsURL) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStatementsResponseTO *create_DXStatementsResponseTO_initWithNSString_(NSString *statementsURL);

FOUNDATION_EXPORT void DXStatementsResponseTO_init(DXStatementsResponseTO *self);

FOUNDATION_EXPORT DXStatementsResponseTO *new_DXStatementsResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStatementsResponseTO *create_DXStatementsResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStatementsResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiUserStatementsResponseTO DXStatementsResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserStatementsResponseTO")
