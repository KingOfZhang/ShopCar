//
//  ViewController.m
//  LZCartViewController
//
//  Created by 易云时代 on 2017/8/21.
//  Copyright © 2017年 XW. All rights reserved.
//

#import "ViewController.h"
#import "LZCartViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    
}
- (IBAction)selector:(id)sender {
    LZCartViewController *cart = [[LZCartViewController alloc]init];
    
//    UINavigationController *nav = [[UINavigationController alloc]initWithRootViewController:cart];
    [self presentViewController:cart animated:YES completion:nil];
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
