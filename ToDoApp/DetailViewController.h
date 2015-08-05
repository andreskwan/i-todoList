//
//  DetailViewController.h
//  ToDoApp
//
//  Created by Andres Kwan on 8/5/15.
//  Copyright (c) 2015 Kwan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

