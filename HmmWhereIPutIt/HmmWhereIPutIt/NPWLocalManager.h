//
//  LocalManager.h
//  DomaciResolved
//
//  Created by Mladjan Antic on 3/21/15.
//  Copyright (c) 2015 iOSAkademija. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface NPWLocalManager : NSObject

@property (nonatomic, strong) NSArray *someArray;

+ (id)sharedManager;


#pragma mark - Core Data

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end
