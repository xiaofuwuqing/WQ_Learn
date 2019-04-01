//
//  JBMineCenterTagsTableCell.h
//  JBApp
//
//  Created by apple on 2019/3/20.
//  Copyright © 2019 apple. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface JBMineCenterTagsTableCell : UITableViewCell

@property (nonatomic,strong)NSMutableArray *tagsArray;

+ (CGFloat)getCellHeightWithArray:(NSArray *)tagArray;
@end

NS_ASSUME_NONNULL_END
