//
//  MasterViewController.h
//  Moso Example
//
//  Created by Johannes Lindenbaum on 2014-06-08.
//
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
