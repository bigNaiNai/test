//
//  DetailViewController.h
//  test
//
//  Created by junior－G on 16/4/17.
//  Copyright © 2016年 gong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

