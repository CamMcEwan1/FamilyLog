//
//  famlyAppDelegate.h
//  Famly
//
//  Created by Cam on 31/01/2014.
//  Copyright (c) 2014 Cam Mcewan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface famlyAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
