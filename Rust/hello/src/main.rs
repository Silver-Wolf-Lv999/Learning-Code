struct User {
    active: bool,
    user_id: u32,
    user_name: String,
    user_emil: String,
}
fn main() {
    let user_1 = User {
        active: true,
        user_id: 1,
        user_name: "User_1".to_string(),
        user_emil: "user@163.com".to_string(),
    };

    print!("用户名{}\n用户邮箱{}", user_1.user_name, user_1.user_emil);

    println!("Hello, world!");
}
