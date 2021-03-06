//
//  KKManagedObject.h
//  Created by Keith Kennedy.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class KMKManagedObjectContext;
@interface KMKManagedObject : NSManagedObject

+ (NSString *)entityName;
+ (instancetype)newObjectInManagedObjectContext:(KMKManagedObjectContext *)context;
+ (NSFetchRequest *)fetchRequest;
+ (NSArray *)allInstancesWithPredicate:(NSPredicate *)predicate
                inManagedObjectContext:(KMKManagedObjectContext *)context;
+ (NSArray *)allInstancesInManagedObjectContext:(KMKManagedObjectContext *)context;

#pragma mark - Order
+ (NSArray *)allInstancesOrdered:(KMKManagedObjectContext *)context;
+ (NSFetchRequest *)orderFetchRequest;
+ (NSSortDescriptor *)orderSortDescriptor;
+ (void)deleteAllInstances:(NSPredicate *)predicate inContext:(KMKManagedObjectContext *)context;

@end
