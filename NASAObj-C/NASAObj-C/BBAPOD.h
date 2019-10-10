//
//  BBAPOD.h
//  NASAObj-C
//
//  Created by Bethany Wride on 10/9/19.
//  Copyright © 2019 Bethany Wride. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BBAPOD : NSObject

@property(nonatomic, copy, readonly)NSString *title;
@property(nonatomic, copy, readonly)NSString *explanation;
@property(nonatomic)NSDate *date;
@property(nonatomic, copy, readonly)NSString *imageURL;

-(BBAPOD *)initWithTitle:(NSString *)title
             explanation:(NSString *)explanation
                    date:(NSDate *)date
                   imageURL:(NSString *)imageURL;

@end

NS_ASSUME_NONNULL_END
