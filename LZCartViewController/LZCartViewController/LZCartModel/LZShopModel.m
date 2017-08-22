//
//  LZShopModel.m
//  LZCartViewController
//
//  Created by 易云时代 on 2017/8/21.
//  Copyright © 2017年 XW. All rights reserved.
//


#import "LZShopModel.h"
#import "LZGoodsModel.h"

@implementation LZShopModel

- (void)configGoodsArrayWithArray:(NSArray*)array; {
    if (array.count > 0) {
        NSMutableArray *dataArray = [NSMutableArray arrayWithCapacity:0];
        for (NSDictionary *dic in array) {
            LZGoodsModel *model = [[LZGoodsModel alloc]init];
            
            model.count = [[dic objectForKey:@"count"] integerValue];
            model.goodsID = [dic objectForKey:@"goodsId"];
            model.goodsName = [dic objectForKey:@"goodsName"];
            model.price = [NSString stringWithFormat:@"%@",[dic objectForKey:@"realPrice"]];
            
            [dataArray addObject:model];
        }
        
        _goodsArray = [dataArray mutableCopy];
    }
}
@end
