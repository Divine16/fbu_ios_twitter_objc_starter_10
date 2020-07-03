//
//  User.h
//  twitter
//
//  Created by Divine Uchechukwu Linus on 6/30/20.
//  Copyright © 2018 Emerson Malca. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface User : NSObject
@property(strong, nonatomic) NSString *name;
@property(strong,nonatomic) NSString *screenname;
-(instancetype)initWithDictionary:(NSDictionary *)dictionary;
@end
