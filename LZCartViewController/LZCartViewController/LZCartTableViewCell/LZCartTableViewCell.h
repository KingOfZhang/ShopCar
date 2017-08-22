//
//  LZCartTableViewCell.h
//  LZCartViewController
//
//  Created by 易云时代 on 2017/8/21.
//  Copyright © 2017年 XW. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LZGoodsModel;
typedef void(^LZNumberChangedBlock)(NSInteger number);
typedef void(^LZCellSelectedBlock)(BOOL select);
@interface LZCartTableViewCell : UITableViewCell
//商品数量
@property (assign,nonatomic)NSInteger lzNumber;
@property (assign,nonatomic)BOOL lzSelected;

- (void)LZReloadDataWithModel:(LZGoodsModel*)model;
- (void)LZNumberAddWithBlock:(LZNumberChangedBlock)block;
- (void)LZNumberCutWithBlock:(LZNumberChangedBlock)block;
- (void)LZCellSelectedWithBlock:(LZCellSelectedBlock)block;
@end
