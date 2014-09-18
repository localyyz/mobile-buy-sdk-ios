//
//  CHKLineItem.h
//  CheckoutAnywhere
//
//  Created by Joshua Tessier on 2014-09-16.
//  Copyright (c) 2014 Shopify Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MERProductVariant;

@interface CHKLineItem : NSObject

/**
 * Optional product variant.
 */
@property (nonatomic, strong) MERProductVariant *variant;

/**
 * The quantity of the line item.
 */
@property (nonatomic, strong) NSDecimalNumber *quantity;

/**
 * The price of the line item. This price does not need to match the product variant.
 */
@property (nonatomic, strong) NSDecimalNumber *price;

/**
 * The title of the line item. The title does not need to match the product variant.
 */
@property (nonatomic, copy) NSString *title;

- (instancetype)initWithVariant:(MERProductVariant *)variant;

@end
