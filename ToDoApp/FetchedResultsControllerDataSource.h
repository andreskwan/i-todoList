//
//  FetchedResultsControllerDataSource.h
//  ToDoApp
//
//  Created by Andres Kwan on 8/5/15.
//  Copyright (c) 2015 Kwan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import <UIKit/UIKit.h>

@interface FetchedResultsControllerDataSource : NSObject <UITableViewDataSource, NSFetchedResultsControllerDelegate>

@property (readonly, strong) NSFetchedResultsController *fetchedResultController;
@property (readonly, strong) UITableView * tableView;


@end
