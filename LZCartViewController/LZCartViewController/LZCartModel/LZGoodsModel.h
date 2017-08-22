//
//  LZGoodsModel.h
//  LZCartViewController
//
//  Created by 易云时代 on 2017/8/21.
//  Copyright © 2017年 XW. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface LZGoodsModel : NSObject

@property (nonatomic,assign) BOOL select;

@property (assign,nonatomic)NSInteger count;
@property (copy,nonatomic)NSString *goodsID;
@property (copy,nonatomic)NSString *goodsName;
@property (copy,nonatomic)NSString *price;
@property (strong,nonatomic)UIImage *image;

@end
