
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilSubListTO")
#ifdef RESTRICT_ComDevexpertsPipestoneApiUtilSubListTO
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilSubListTO 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiUtilSubListTO 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiUtilSubListTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSubListTO_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiUtilSubListTO || defined(INCLUDE_PSSubListTO))
#define PSSubListTO_

#define RESTRICT_JavaUtilList 1
#define INCLUDE_JavaUtilList 1
#include "java/util/List.h"

@class IOSObjectArray;
@class PSAbstractListTO;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionPredicate;
@protocol JavaUtilFunctionUnaryOperator;
@protocol JavaUtilIterator;
@protocol JavaUtilListIterator;
@protocol JavaUtilSpliterator;
@protocol JavaUtilStreamStream;

@interface PSSubListTO : NSObject < JavaUtilList >

#pragma mark Public

- (jboolean)addWithId:(id)item;

- (void)addWithInt:(jint)index
            withId:(id)item;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)addAllWithInt:(jint)index
   withJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)clear;

- (jboolean)containsWithId:(id)o;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (id)getWithInt:(jint)index;

- (jint)indexOfWithId:(id)o;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jint)lastIndexOfWithId:(id)o;

- (id<JavaUtilListIterator>)listIterator;

- (id<JavaUtilListIterator>)listIteratorWithInt:(jint)index;

- (id)removeWithInt:(jint)index;

- (jboolean)removeWithId:(id)target;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (id)setWithInt:(jint)index
          withId:(id)item;

- (jint)size;

- (id<JavaUtilList>)subListWithInt:(jint)fromIndex
                           withInt:(jint)toIndex;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

#pragma mark Package-Private

- (instancetype __nonnull)initWithPSAbstractListTO:(PSAbstractListTO *)parent
                                           withInt:(jint)fromIndex
                                           withInt:(jint)toIndex;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSSubListTO)

FOUNDATION_EXPORT void PSSubListTO_initWithPSAbstractListTO_withInt_withInt_(PSSubListTO *self, PSAbstractListTO *parent, jint fromIndex, jint toIndex);

FOUNDATION_EXPORT PSSubListTO *new_PSSubListTO_initWithPSAbstractListTO_withInt_withInt_(PSAbstractListTO *parent, jint fromIndex, jint toIndex) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSubListTO *create_PSSubListTO_initWithPSAbstractListTO_withInt_withInt_(PSAbstractListTO *parent, jint fromIndex, jint toIndex);

J2OBJC_TYPE_LITERAL_HEADER(PSSubListTO)

@compatibility_alias ComDevexpertsPipestoneApiUtilSubListTO PSSubListTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiUtilSubListTO")
