//
//  LZShopModel.h
//  LZCartViewController
//
//  Created by 易云时代 on 2017/8/21.
//  Copyright © 2017年 XW. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface LZShopModel : NSObject

@property (assign,nonatomic)BOOL select;
@property (copy,nonatomic)NSString *shopID;
@property (copy,nonatomic)NSString *shopName;
@property (copy,nonatomic)NSString *sID;
@property (strong,nonatomic,readonly)NSMutableArray *goodsArray;

- (void)configGoodsArrayWithArray:(NSArray*)array;
@end
