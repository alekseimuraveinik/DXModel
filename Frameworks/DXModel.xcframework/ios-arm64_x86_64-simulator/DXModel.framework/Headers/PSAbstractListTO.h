
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilAbstractListTO")
#ifdef RESTRICT_ComDevexpertsPipestoneApiUtilAbstractListTO
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilAbstractListTO 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilAbstractListTO 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiUtilAbstractListTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSAbstractListTO_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiUtilAbstractListTO || defined(INCLUDE_PSAbstractListTO))
#define PSAbstractListTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

#define RESTRICT_JavaUtilList 1
#define INCLUDE_JavaUtilList 1
#include "java/util/List.h"

@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionPredicate;
@protocol JavaUtilFunctionUnaryOperator;
@protocol JavaUtilIterator;
@protocol JavaUtilListIterator;
@protocol JavaUtilSpliterator;
@protocol JavaUtilStreamStream;

@interface PSAbstractListTO : PSBaseTransferObject < JavaUtilList > {
 @public
  jint modCount_;
  jint size_;
  IOSObjectArray *items_;
}
@property (readonly, class) jint INVALID_INDEX NS_SWIFT_NAME(INVALID_INDEX);

+ (jint)INVALID_INDEX;

#pragma mark Public

- (jboolean)addWithId:(id)i;

- (void)addWithInt:(jint)index
            withId:(id)element;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)addAllWithInt:(jint)index
   withJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)clear;

- (PSBaseTransferObject *)java_clone;

- (jboolean)containsWithId:(id)o;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)ensureCapacityWithInt:(jint)minCapacity;

- (jboolean)isEqual:(id)o;

- (id)getWithInt:(jint)index;

- (NSUInteger)hash;

- (jint)indexOfWithId:(id)target;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jint)lastIndexOfWithId:(id)target;

- (id<JavaUtilListIterator>)listIterator;

- (id<JavaUtilListIterator>)listIteratorWithInt:(jint)index;

- (id)removeWithInt:(jint)index;

- (jboolean)removeWithId:(id)item;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (id)setWithInt:(jint)index
          withId:(id)element;

- (jint)size;

- (id<JavaUtilList>)subListWithInt:(jint)fromIndex
                           withInt:(jint)toIndex;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

- (NSString *)description;

- (void)trimToSize;

#pragma mark Protected

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (instancetype __nonnull)initWithInt:(jint)initialCapacity;

- (id)elementDataWithInt:(jint)index;

- (void)ensureCapacityWithInt:(jint)minCapacity
                  withBoolean:(jboolean)strict;

#pragma mark Package-Private

- (void)removeRangeWithInt:(jint)fromIndex
                   withInt:(jint)toIndex;

@end

J2OBJC_STATIC_INIT(PSAbstractListTO)

J2OBJC_FIELD_SETTER(PSAbstractListTO, items_, IOSObjectArray *)

inline jint PSAbstractListTO_get_INVALID_INDEX(void);
#define PSAbstractListTO_INVALID_INDEX -1
J2OBJC_STATIC_FIELD_CONSTANT(PSAbstractListTO, INVALID_INDEX, jint)

FOUNDATION_EXPORT void PSAbstractListTO_init(PSAbstractListTO *self);

FOUNDATION_EXPORT void PSAbstractListTO_initWithInt_(PSAbstractListTO *self, jint initialCapacity);

FOUNDATION_EXPORT void PSAbstractListTO_initWithJavaUtilCollection_(PSAbstractListTO *self, id<JavaUtilCollection> collection);

J2OBJC_TYPE_LITERAL_HEADER(PSAbstractListTO)

@compatibility_alias ComDevexpertsPipestoneApiUtilAbstractListTO PSAbstractListTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilAbstractListTO")
