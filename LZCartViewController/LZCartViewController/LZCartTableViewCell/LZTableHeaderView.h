//
//  LZTableHeaderView.h
//  LZCartViewController
//
//  Created by 易云时代 on 2017/8/21.
//  Copyright © 2017年 XW. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^buttonClickBlock)(BOOL select);
@interface LZTableHeaderView : UITableViewHeaderFooterView

@property (copy,nonatomic)NSString *title;
@property (copy,nonatomic)buttonClickBlock lzClickBlock;
@property (assign,nonatomic)BOOL select;
@end
