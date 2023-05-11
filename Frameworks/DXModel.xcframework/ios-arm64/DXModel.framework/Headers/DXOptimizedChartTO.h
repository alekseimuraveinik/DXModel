
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartOptimizedChartTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiChartOptimizedChartTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartOptimizedChartTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartOptimizedChartTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiChartOptimizedChartTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOptimizedChartTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartOptimizedChartTO || defined(INCLUDE_DXOptimizedChartTO))
#define DXOptimizedChartTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXChartTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXOptimizedChartTO : PSBaseTransferObject
@property (readonly, class, strong) DXOptimizedChartTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOptimizedChartTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXChartTO:(DXChartTO *)chartTO;

- (DXOptimizedChartTO *)change;

- (DXChartTO *)deOptimize;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOptimizedChartTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXOptimizedChartTO)

inline DXOptimizedChartTO *DXOptimizedChartTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOptimizedChartTO *DXOptimizedChartTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOptimizedChartTO, EMPTY, DXOptimizedChartTO *)

FOUNDATION_EXPORT void DXOptimizedChartTO_initWithDXChartTO_(DXOptimizedChartTO *self, DXChartTO *chartTO);

FOUNDATION_EXPORT DXOptimizedChartTO *new_DXOptimizedChartTO_initWithDXChartTO_(DXChartTO *chartTO) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOptimizedChartTO *create_DXOptimizedChartTO_initWithDXChartTO_(DXChartTO *chartTO);

FOUNDATION_EXPORT void DXOptimizedChartTO_init(DXOptimizedChartTO *self);

FOUNDATION_EXPORT DXOptimizedChartTO *new_DXOptimizedChartTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOptimizedChartTO *create_DXOptimizedChartTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOptimizedChartTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiChartOptimizedChartTO DXOptimizedChartTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartOptimizedChartTO")
