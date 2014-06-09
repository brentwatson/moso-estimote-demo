//
//  DetailViewController.h
//  Moso Example
//
//  Created by Johannes Lindenbaum on 2014-06-08.
//
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
